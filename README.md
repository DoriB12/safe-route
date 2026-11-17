# SafeRoute - Módulo IoT / Edge Computing (ESP32)

## Ficha da CitizenTech
* **Nome da CitizenTech:** SafeRoute[cite: 1]
* **Cidade & Foco:** São Paulo (Zonas urbanas e rotas críticas / Alertas preventivos)[cite: 1]
* **Cidadão Beneficiado:** Motoristas de aplicativo, entregadores, pedestres e trabalhadores em deslocamento noturno[cite: 1]
* **Problema:** Falta de alertas preventivos de segurança em tempo real durante a navegação em rotas urbanas desconhecidas[cite: 1]
* **ODS Conectados:** ODS 11 (Cidades Sustentáveis), ODS 9 (Inovação e Infraestrutura) e ODS 16 (Paz e Justiça)[cite: 1]

---

## Integrantes do Grupo (1ESPF)
* **Brenda Priscila Chalco Condori** — RM: 571971
* **Diego Ruffini Silva Jimenez** — RM: 571015
* **Nicolly Florencio Vilela** — RM: 573392
* **Samuel Eduardo Lisboa Etcheverry** — RM: 573715

---

## Sobre o Circuito (Edge Computing)
Simulação de um totem físico de alerta urbano utilizando **ESP32** no Wokwi[cite: 1]. O sistema lê dados simulados por um potenciômetro (representando o nível de risco da zona urbana), suaviza o sinal e altera o estado do totem em 3 níveis:
* **Estado 0 (Verde):** Zona segura / Operação normal.
* **Estado 1 (Amarelo):** Atenção / Risco moderado (Sinal luminoso e aviso sonoro intermitente).
* **Estado 2 (Vermelho):** Zona crítica / Risco alto (Alarme sonoro mais forte e LED vermelho ativo).

O código utiliza controle de tempo não-bloqueante com `millis()` e média móvel de leituras para garantir estabilidade de borda[cite: 1].

---

## Vídeo de Demonstração
* **Link do YouTube:** [Cole aqui o link do seu vídeo quando gravar][cite: 1]
