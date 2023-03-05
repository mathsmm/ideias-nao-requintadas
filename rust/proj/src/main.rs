fn bubble_sort(n: usize, v: &mut Vec<f64>) { 
    let mut i: usize = 0;
    while i < n - 1 {
        let mut j: usize = 0;
        while j < n - (i + 1) {
            if v[j] > v[j + 1] {
                let tmp: f64 = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
            j += 1;
        }
        i += 1;
    }
}


fn rec_bubble_sort(n: usize, v: &mut Vec<f64>) {
    if n == 1 {
        return //Retorno --> ()
    }

    let mut i: usize = 0;
    while i < n - 1 {
        if v[i] > v[i + 1] {
            let tmp: f64 = v[i];
            v[i] = v[i + 1];
            v[i + 1] = tmp;
        }
        i += 1
    }

    return rec_bubble_sort(n - 1, v)
}


fn troca(v: &mut Vec<f64>, a: usize, b: usize) {
    let tmp: f64 = v[a];
    v[a] = v[b];
    v[b] = tmp;
}

fn particiona(v: &mut Vec<f64>, mut a: usize, mut b: usize) -> usize {
    let x: f64 = v[a];
    let mut i: usize = a;
    while i <= b {
        if v[i] < x {
            troca(v, a, i);
            a += 1;
            i += 1;
        } else if v[i] > x {
            troca(v, i, b);
            b -= 1;
        } else {
            i += 1;
        }
    }
    return a;
}

fn quick_sort(v: &mut Vec<f64>, a: usize, b: usize) {
    if a < b {
        let indice_pivo: usize = particiona(v, a, b);
        quick_sort(v, a, indice_pivo - 1);
        quick_sort(v, indice_pivo + 1, b);
    }
}

fn main() {
    // let mut vect: Vec<f64> = Vec::from([1, 5, -12, 12, 10, 20, -50, 40, 99, 2, -1, -2, 2, 2].map(|x| f64::from(x)));
    // bubble_sort(vect.len(), &mut vect);
    // println!("{:?}", vect);

    // let mut vect: Vec<f64> = Vec::from([1, 5, -12, 12, 10, 20, -50, 40, 99, 2, -1, -2, 2, 2].map(|x| f64::from(x)));
    // rec_bubble_sort(vect.len(), &mut vect);
    // println!("{:?}", vect);

    let mut vect: Vec<f64> = Vec::from([1, 5, -12, 12, 10, 20, -50, 40, 99, 2, -1, -2, 2, 2].map(|x| f64::from(x)));
    let vlen: usize = vect.len();
    quick_sort(&mut vect, 0, vlen - 1);
    println!("{:?}", vect);
}